# Custom kernel for Xiaomi Redmi Note 3 (Hennessy)
# Kernel version 3.10.61
# Vendor Vanzo
Works in rom(tested 7.0.11.0) and recovery

* Works:
	* LCM(nt35596 tianma, nt35532_boe)
	* tps65132
	* Wi-fi
	* IOCTL (fixed hwcomposer and surfaceflinger)
	* Bt
	* Button-backlight
	* Brightness
	* Leds indication only (bugs)
	* Touch(focaltech)
	* Alsps (ps bugged)
	* Accel
	* Giro
	* SOUND(Speaker, Headphones)
	* FM radio
	* Vibrator
	* Battery 3000mah (need to change to 4000 mah)
	* USB-MTP
	* CW2015

* Don't tested (maybe working):
	* OTG
	* Touch atmel
	* LCM nt35596_auo
	* Fix Sleep

* Don't work:
	* Mag
	* bq24296
	* MD1 and MD2(sim1 and sim2)
    * Gpu (bugs) 
	* Camera
	* Lens
	* IR Blaster
	* Flashlight
	* Fingerprint

=================================================
# BUILD
export TOP=$(pwd)
export CROSS_COMPILE=/home/smosia/Android/utility/aarch64-linux-android-4.9/bin/aarch64-linux-android-
mkdir -p $TOP/KERNEL_OBJ
make -C kernel-3.10 O=$TOP/KERNEL_OBJ ARCH=arm64 MTK_TARGET_PROJECT=hennessy TARGET_BUILD_VARIANT=user CROSS_COMPILE=$TOOLCHAIN ROOTDIR=$TOP hennessy_defconfig
make -C kernel-3.10 O=$TOP/KERNEL_OBJ ROOTDIR=$TOP

# Busses
* I2C0:
	* DW9761BAF 	            (0018)
	* BU6429AF 	            	(0019)
	* CAM_CAL_DRV           	(0036)
	* OV13853_CAM_CAL_DRV    	(0037)
	* tps65132              	(003e)
	* kd_camera_hw          	(007f)
* I2C1:
	* da9210                	(0068)	
	* tps6128x              	(0075)	
* I2C2:
	* FT						(0038) 	
	* atmel_mxt_ts           	(004a)	
	* kd_camera_hw_bus2    		(007f)		
* I2C3:
	* akm09911               	(000c)	
	* LTR_559ALS				(0023)	
	* yas537                	(002e)	
	* LSM6DS3_GYRO				(0034)	
	* stk3x1x               	(0048) 	
	* lm3643					(0063)	
	* bmi160_gyro				(0066)	
	* bmi160_acc				(0068)	
	* LSM6DS3_ACCEL         	(006a)	
	* bq24296         			(006b)	
* I2C4:
	* CW2015 					(0062)
* SPI0.0:
	* fpc1020							
* SPI0.1:
	* fp_spi							

# Ported by
* Smosia

# AUTORS
* nofearnohappy
* LazyC0DEr
* Anomalchik
