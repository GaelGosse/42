# sudo docker run -d -p 80:80 --name nginx nginx

all: 
	mkdir -p /home/gael/data/mariadb
	mkdir -p /home/gael/data/wordpress
	docker compose -f ./srcs/docker-compose.yml up -d --build

logs:
	docker logs wordpress
	docker logs mariadb
	docker logs nginx

clean:
	docker container stop nginx mariadb wordpress
	docker network rm inception

fclean: clean
	sudo rm -rf /home/gael/data/mariadb/*
	sudo rm -rf /home/gael/data/wordpress/*
	docker system prune -af

re: fclean all

.Phony: all logs clean fclean