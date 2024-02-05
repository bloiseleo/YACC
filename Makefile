.ONESHELL:
SHELL := /bin/bash

all: create_dist calculator

create_dist:
	if ! [ -d "./dist" ]; then 
		mkdir "./dist" 
	fi

calculator:
	gcc *.c -o ./dist/main.out

clean:
	@rm -rf ./dist