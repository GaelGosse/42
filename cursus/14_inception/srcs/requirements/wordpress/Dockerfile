FROM debian:bullseye

RUN apt-get update -y \
	&& apt-get upgrade -y \
	&& apt-get install -y wget \
	&& apt-get install -y php7.4 php-fpm php-mysql \
	&& wget https://raw.githubusercontent.com/wp-cli/builds/gh-pages/phar/wp-cli.phar \
	&& chmod +x wp-cli.phar \
	&& mv wp-cli.phar /usr/local/bin/wp

RUN apt-get update && apt-get install -y default-mysql-client \
	&& apt-get install -y mariadb-client \
	&& wget https://wordpress.org/wordpress-6.4.1.tar.gz -P /var/www/html \
	&& cd /var/www/html \
	&& tar -xzf /var/www/html/wordpress-6.4.1.tar.gz \
	&& rm /var/www/html/wordpress-6.4.1.tar.gz


RUN chown -R www-data:www-data /var/www/* \
	&& chmod -R 755 /var/www/*

EXPOSE 9000

COPY ./tools/wpscript.sh	./
COPY ./tools/wpscript.sh	/var/run/wordpress/wpscript.sh
RUN chmod +x ./wpscript.sh
RUN chmod +x /var/run/wordpress/wpscript.sh

COPY ./conf/www.conf /etc/php/7.4/fpm/pool.d/www.conf

ENTRYPOINT ["bash", "./wpscript.sh"]
