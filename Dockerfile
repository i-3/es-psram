FROM espressif/idf:v5.2.2

RUN curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh -s -- -y
ENV PATH="/root/.cargo/bin:${PATH}"

RUN rustup toolchain install nightly && \
    cargo +nightly install espup && \
    espup install

WORKDIR /project

ENTRYPOINT ["/opt/espressif/idf/entrypoint.sh"]
CMD ["cargo", "build"]