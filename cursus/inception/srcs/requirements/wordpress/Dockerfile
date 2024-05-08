FROM debian:bullseye

RUN apt-get update -y
RUN apt-get upgrade -y
RUN apt-get install -y wget php7.4 php-fpm php-mysql tar

# a command-line interface for WordPress, you can manage WordPress once it's downloaded
RUN wget https://raw.githubusercontent.com/wp-cli/builds/gh-pages/phar/wp-cli.phar \
	&& chmod +x wp-cli.phar \
	&& mv wp-cli.phar /usr/local/bin/wp

RUN apt-get update && apt-get install -y default-mysql-client
RUN apt-get install -y mariadb-client
RUN wget https://wordpress.org/wordpress-6.1.1.tar.gz -P /var/www/html
RUN cd /var/www/html \
	&& tar -xzf /var/www/html/wordpress-6.1.1.tar.gz \
	&& rm /var/www/html/wordpress-6.1.1.tar.gz

# ensure that the web server(nginx) has the necessary permissions to read and execute the files within the web root directory
RUN chown -R www-data:www-data /var/www/*
RUN chmod -R 755 /var/www/*

EXPOSE 9000

COPY ./tools/wpscript.sh ./
RUN chmod +x ./wpscript.sh

COPY ./conf/www.conf /etc/php/7.4/fpm/pool.d/www.conf

ENTRYPOINT ["bash", "./wpscript.sh"]




# FROM debian:bullseye

# RUN apt-get update -y \
#     && apt-get upgrade -y \
#     && apt-get install -y wget php7.4 php-fpm php-mysql default-mysql-client mariadb-client tar \
#     && apt-get clean

# # Install WP-CLI
# RUN wget https://raw.githubusercontent.com/wp-cli/builds/gh-pages/phar/wp-cli.phar \
#     && chmod +x wp-cli.phar \
#     && mv wp-cli.phar /usr/local/bin/wp

# # Download and extract WordPress
# RUN wget https://wordpress.org/wordpress-6.1.1.tar.gz -P /var/www/html \
#     && tar -xzf /var/www/html/wordpress-6.1.1.tar.gz -C /var/www/html \
#     && rm /var/www/html/wordpress-6.1.1.tar.gz

# # Set permissions
# RUN chown -R www-data:www-data /var/www/html \
#     && chmod -R 755 /var/www/html

# # Copy PHP-FPM config file
# COPY ./conf/www.conf /etc/php/7.4/fpm/pool.d/www.conf

# # Copy and set up entry script
# COPY ./tools/wpscript.sh ./
# RUN chmod +x ./wpscript.sh

# EXPOSE 9000

# ENTRYPOINT ["bash", "./wpscript.sh"]
