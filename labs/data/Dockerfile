FROM gcc
WORKDIR /home/
COPY ./dlc .
COPY ./driver.pl .

ENTRYPOINT ["bash", "-c"]
CMD ["/home/dlc"]
