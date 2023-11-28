# libdlsp

Small C library for developing integrated programs for Ratchet Deadlocked PS2 Singleplayer.

## Building

Building libdlsp requires an installation of the open source PS2SDK. I recommend using a prebuilt docker image.

### Grab the v1.2.0 ps2dev docker image

```docker pull ps2dev/ps2dev:v1.2.0```

### Clone and enter the repo

```git clone https://github.com/Dnawrkshp/libdlsp.git && cd libdlsp```

### Launch a new docker container with the current directory mounted

```docker run -it --rm -v "$PWD\:/src" ps2dev/ps2dev:v1.2.0```

### Add make

```apk add make gcc```

### Enter mounted directory

```cd src```

### Build

```make```

## Installing

You can run ```make install``` to install the library into your local PS2SDK lib folder.
