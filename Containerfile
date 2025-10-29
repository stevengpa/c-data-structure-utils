FROM debian:latest

RUN apt-get update && apt-get install -y \
    valgrind \
    gcc \
    make \
    gdb \
 && apt-get clean

WORKDIR /app

