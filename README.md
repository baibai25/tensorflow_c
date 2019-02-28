# tensorflow_c

## Setup
1. Download TensorFlow C library
2. extract to `/usr/locale/lib`
3. configure the linker

```
sudo tar -C /usr/local -xzf (downloaded file)
sudo ldconfig
```

## Compile

```
cc hello_tf.c -ltensorflow -o hello_tf
./hello_tf
```