FROM centos:centos8

RUN yum update -y && yum install -y gcc make cmake gcc-c++ mysql

WORKDIR /opt
COPY gmsv ./gmsv
COPY saac ./saac
COPY packages .

RUN yum localinstall -y mysql-community-*

# RUN go build -ldflags '-w -s' -a -o ./bin/app ./cmd/app
# CMD ["/myapp/bin/app"]
# EXPOSE 8080