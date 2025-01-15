FROM gcc:4.9
COPY . /usr/src/myapp
WORKDIR /usr/src/myapp
RUN gcc  -std=c11 -o myapp proiect.c
CMD ["./myapp"]
