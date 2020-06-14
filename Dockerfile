FROM ubuntu:20.04

ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update

RUN apt-get -y upgrade

RUN apt-get -y install cmake gcc g++ make doxygen git

