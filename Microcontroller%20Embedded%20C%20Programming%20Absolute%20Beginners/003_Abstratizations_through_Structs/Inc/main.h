/*
 * main.h
 *
 *  Created on: Feb 3, 2026
 *      Author: George.Calin
 */

#ifndef MAIN_H
#define MAIN_H

#include <stdint.h>

struct RCC_AHB1ENR
{
	uint32_t gpio_a_en : 1;
	uint32_t gpio_b_en : 1;
	uint32_t gpio_c_en : 1;
	uint32_t gpio_d_en : 1;
	uint32_t gpio_e_en : 1;
	uint32_t gpio_f_en : 1;
	uint32_t gpio_g_en : 1;
	uint32_t gpio_h_en : 1;
	uint32_t gpio_i_en : 1;
	uint32_t gpio_j_en : 1;
	uint32_t gpio_k_en : 1;
	uint32_t reserved_1 : 1;
	uint32_t crc_en : 1;
	uint32_t reserved_2 : 5;
	uint32_t bkpsram_en : 1;
	uint32_t reserved_3 : 1;
	uint32_t ccmdataram_en : 1;
	uint32_t dma1_en : 1;
	uint32_t dma2_en : 1;
	uint32_t dma2d_en : 1;
	uint32_t ethmanc_en : 1;
	uint32_t ethmactxe_en : 1;
	uint32_t ethmacr_en : 1;
	uint32_t ethmacptp_en : 1;
	uint32_t otghs_en :1;
	uint32_t otghs_ulpi_en : 1;
	uint32_t reserved_4 : 1;

};

typedef struct RCC_AHB1ENR RCC_AHB1ENR_t;

struct GPIOx_MODER
{
	uint32_t moder_0 : 2;
	uint32_t moder_1 : 2;
	uint32_t moder_2 : 2;
	uint32_t moder_3 : 2;
	uint32_t moder_4 : 2;
	uint32_t moder_5 : 2;
	uint32_t moder_6 : 2;
	uint32_t moder_7 : 2;
	uint32_t moder_8 : 2;
	uint32_t moder_9 : 2;
	uint32_t moder_10 : 2;
	uint32_t moder_11 : 2;
	uint32_t moder_12 : 2;
	uint32_t moder_13 : 2;
	uint32_t moder_14 : 2;
	uint32_t moder_15 : 2;
};

typedef struct GPIOx_MODER GPIOx_MODER_t;

struct GPIOx_ODR
{
	uint32_t odr_0 : 1;
	uint32_t odr_1 : 1;
	uint32_t odr_2 : 1;
	uint32_t odr_3 : 1;
	uint32_t odr_4 : 1;
	uint32_t odr_5 : 1;
	uint32_t odr_6 : 1;
	uint32_t odr_7 : 1;
	uint32_t odr_8 : 1;
	uint32_t odr_9 : 1;
	uint32_t odr_10 : 1;
	uint32_t odr_11 : 1;
	uint32_t odr_12 : 1;
	uint32_t odr_13 : 1;
	uint32_t odr_14 : 1;
	uint32_t odr_15 :1;
	uint32_t reserved: 16;
};

typedef struct GPIOx_ODR GPIOx_ODR_t;

#define BASE_RCC_AHB1ENR ((uint32_t*) (0x40023800 + 0x30))
#define BASE_GPIOB_MODER ((uint32_t*) (0x40020400))
#define BASE_GPIOB_ODR ((uint32_t*) (0x40020400 + 0x14))

#endif
