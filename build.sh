export TOP=$(pwd)
export CROSS_COMPILE=/home/smosia/Android/utility/aarch64-linux-android-4.9/bin/aarch64-linux-android-
mkdir -p $TOP/KERNEL_OBJ
make -C kernel-3.10 O=$TOP/KERNEL_OBJ ARCH=arm64 MTK_TARGET_PROJECT=hennessy TARGET_BUILD_VARIANT=user CROSS_COMPILE=$TOOLCHAIN ROOTDIR=$TOP hennessy_defconfig
make -C kernel-3.10 O=$TOP/KERNEL_OBJ ROOTDIR=$TOP

# userfriendly :)
rm /home/smosia/Android/CarlivImageKitchen64/boot_mr7/boot.img-kernel
cp /home/smosia/Android/kernel/henessy/KERNEL_OBJ/arch/arm64/boot/Image.gz-dtb /home/smosia/Android/CarlivImageKitchen64/boot_mr7/boot.img-kernel
