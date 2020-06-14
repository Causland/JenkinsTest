FROM ubuntu:20.04

MAINTAINER Ervin Varga 

ARG DEBIAN_FRONTEND=noninteractive

ENV MY_INSTALL_DIR $HOME/.local

RUN mkdir -p $MY_INSTALL_DIR

ENV PATH "$PATH:$MY_INSTALL_DIR/bin"

RUN apt-get update

RUN apt-get -y upgrade

RUN apt-get -y install cmake gcc g++ make doxygen git

RUN apt-get install -y build-essential autoconf libtool pkg-config

RUN git clone --recurse-submodules -b v1.28.1 https://github.com/grpc/grpc

RUN cd grpc && mkdir -p cmake/build && cd cmake/build && cmake -DgRPC_INSTALL=ON -DgRPC_BUILD_TESTS=OFF -DCMAKE_INSTALL_PREFIX=$MY_INSTALL_DIR ../.. && make -j && make install

