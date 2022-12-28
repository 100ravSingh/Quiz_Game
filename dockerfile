FROM ubuntu:20.04

# Install dependencies
RUN apt-get update && apt-get install -y \
    build-essential \
    g++

# Copy the source code
COPY . /app

# Set the working directory
WORKDIR /app

# Build the program
RUN g++ -o Main Main.cpp

# Run the program
CMD ["./Main"]
