FROM debian:bullseye

RUN apt-get update -y
RUN apt-get install -y nginx vim curl
RUN mkdir -p /etc/nginx/ssl
RUN apt-get install -y openssl

# openssl : secured connection over internet
# /etc/nginx/ssl : where certificates are stored

RUN openssl req -x509 -nodes -out /etc/nginx/ssl/inception.crt -keyout /etc/nginx/ssl/inception.key -subj "/C=FR/ST=IDF/L=Paris/O=42/OU=42/CN=ggosse.42.fr/UID=ggosse"
# -> generate self signed certificates SSL/TLS
# req : C.ertificate S.ign R.equest
# x509 : selft signed
# -nodes : no encryption
# -out : the arg is the path/filename where the certif will be created
# -keyout : the arg is the path/filename where the private key
# -subj : the arg is the path/filename where subject of the certif is stored 

RUN mkdir -p /var/run/nginx
COPY ./conf/nginx.conf /etc/nginx/nginx.conf
# ensure the container is using this file for config

RUN chmod 755 /var/www/html
RUN chown -R www-data:www-data /var/www/html

EXPOSE 443

CMD ["nginx", "-g", "daemon off;"]
