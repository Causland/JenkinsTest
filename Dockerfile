FROM ubuntu:trusty

MAINTAINER Ervin Varga 

RUN apt-get update

RUN apt-get -y upgrade

RUN apt-get -y install cmake gcc g++ make doxygen