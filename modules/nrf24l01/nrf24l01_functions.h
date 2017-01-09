#ifndef _NRF24L01_FUNCTIONS_H_
#define _NRF24L01_FUNCTIONS_H_

#include "nrf24l01_core.h"

int nrf24l01_set_channel(struct nrf24l01_t* nrf, unsigned int ch);
int nrf24l01_get_channel(struct nrf24l01_t* nrf, unsigned int* ch);
int nrf24l01_set_tx_power(struct nrf24l01_t* nrf, unsigned int ch);
int nrf24l01_get_tx_power(struct nrf24l01_t* nrf, unsigned int* ch);
int nrf24l01_set_address_width(struct nrf24l01_t* nrf, unsigned int width);
int nrf24l01_get_address_width(struct nrf24l01_t* nrf, unsigned int* width);
int nrf24l01_flush_rx(struct nrf24l01_t* nrf);
int nrf24l01_flush_tx(struct nrf24l01_t* nrf);
int nrf24l01_flush(struct nrf24l01_t* nrf);
int nrf24l01_set_pwr_up(struct nrf24l01_t* nrf, unsigned int state);
int nrf24l01_pwr_up(struct nrf24l01_t* nrf);
int nrf24l01_pwr_down(struct nrf24l01_t* nrf);
int nrf24l01_get_pwr_state(struct nrf24l01_t* nrf, unsigned int* state);
int nrf24l01_set_prim_rx(struct nrf24l01_t* nrf, unsigned int state);
int nrf24l01_set_rx(struct nrf24l01_t* nrf);
int nrf24l01_set_tx(struct nrf24l01_t* nrf);
int nrf24l01_get_prim_rx(struct nrf24l01_t* nrf, unsigned int* state);
int nrf24l01_set_rx_addr(struct nrf24l01_t* nrf, unsigned int* pipe, unsigned char* addr, unsigned int len);
int nrf24l01_get_rx_addr(struct nrf24l01_t* nrf, unsigned int* pipe, unsigned char* addr, unsigned int len);
int nrf24l01_set_tx_addr(struct nrf24l01_t* nrf, unsigned char* addr, unsigned int len);
int nrf24l01_get_tx_addr(struct nrf24l01_t* nrf, unsigned char* addr, unsigned int len);
void nrf24l01_set_ce(struct nrf24l01_t* nrf, unsigned int state);

#define NRF24L01_CE_HI(nrf) nrf24l01_set_ce(nrf, 1)
#define NRF24L01_CE_LO(nrf) nrf24l01_set_ce(nrf, 0)

#endif
