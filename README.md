# P.D.C Private Distributed Cloud

## Note: currently the project is at work, until now the NBD module is done.
## Asynchronous Reactor is implemented right now in C++ and will be integrated soon
## Next is the to connect the IOT's to the agent in the client device. 

NBD-BUSE-SERVER is a Network Block Device (NBD) server implementation for Linux. It provides a user-space interface to manage NBD drivers, handle data requests, and interact with block devices. This README provides an overview of the project structure, how to compile and run it, and key functionalities.

## Project Structure

The project is organized into several directories:

* bin/executables: Contains compiled executable files.

* bin/objects: Stores object files generated during compilation.

* bin/shared_libs: Holds shared libraries if used in the project.

* bin/static_libs: Contains static libraries if used in the project.

* include: Includes header files necessary for the project.

* src: Contains the source code files for the NBD-BUSE-SERVER.

* test: This directory is where you'll find the server implementation and a Makefile for building and testing the project.

## Compilation and Execution
To compile and run the project, follow these steps:

1. Navigate to the test/buse folder.

2. Use the provided Makefile for various tasks:

```shell
# Simple compilation
$ make
# Running the project
$ make run
# Debugging the project
$ make debug
# Deleting all the obj, exe, shared/static libs files
$ make clean 
# Checking valgrind on the project
$ make vlg 
# Release compilation with optimization -O3
$ make release

```

## Project Functionality
- The NBD-BUSE-SERVER project offers the following key functionalities:

- NBD Server: The server acts as a bridge between an NBD driver and user interaction. It handles incoming read and write requests, allowing data manipulation on a block device buffer.

- User Console Commands: Users can interact with the server by sending commands via the console. Supported commands include quitting the server and requesting debugging information.

- Timeout Mechanism: The server employs a timeout mechanism to periodically check for activity, ensuring responsiveness.

- Signal Handling: The project uses signal handling to manage disconnection requests and other critical operations.


## Getting Started
To get started with the NBD-BUSE-SERVER project, navigate to the test/buse folder and follow the compilation and execution instructions mentioned above. Explore the source code in the src directory to understand the server's implementation and customize it as needed for your specific use case.

For more information on NBD and its usage, please refer to the Linux NBD driver documentation and the NBD project documentation.

[Linux NBD driver](https://docs.kernel.org/admin-guide/blockdev/nbd.html)

## Contact

For any questions about the project:

### Name: Tal Aharon
### Email: tal.aharon.work@gmail.com