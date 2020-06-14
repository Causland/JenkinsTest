FROM ubuntu:20.04

MAINTAINER Ervin Varga 

ENV MY_INSTALL_DIR $HOME/.local

RUN mkdir -p $MY_INSTALL_DIR

ENV PATH "$PATH:$MY_INSTALL_DIR/bin"

RUN apt-get update

RUN apt-get -y upgrade

RUN apt-get -y install cmake gcc g++ make doxygen git

RUN apt-get install -y build-essential autoconf libtool pkg-config

RUN git clone --recurse-submodules -b v1.28.1 https://github.com/grpc/grpc

RUN cd grpc

RUN mkdir -p cmake/build

RUN pushd cmake/build

RUN cmake -DgRPC_INSTALL=ON -DgRPC_BUILD_TESTS=OFF -DCMAKE_INSTALL_PREFIX=$MY_INSTALL_DIR ../..

RUN make -j

RUN make install

RUN popd

