FROM ubuntu:20.04

MAINTAINER Ervin Varga 

RUN apt-get update

RUN apt-get -y upgrade

RUN apt-get -y install cmake gcc g++ make doxygen