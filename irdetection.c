#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_gpio.h"
 

 
int main(void)
{
		GPIO_InitTypeDef GPIO_InitStruct;
    // Enable clock for GPIO
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
 
/*****************INPUT PIN CONFIG****************************/
    GPIO_InitStruct.GPIO_Pin = GPIO_Pin_0;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPD;
    GPIO_Init(GPIOA, &GPIO_InitStruct);
				 
    GPIO_InitStruct.GPIO_Pin = GPIO_Pin_1;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPD;
    GPIO_Init(GPIOA, &GPIO_InitStruct);
 
		GPIO_InitStruct.GPIO_Pin = GPIO_Pin_2;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPD;
    GPIO_Init(GPIOA, &GPIO_InitStruct);
	
		GPIO_InitStruct.GPIO_Pin = GPIO_Pin_3;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPD;
    GPIO_Init(GPIOA, &GPIO_InitStruct);
		
		GPIO_InitStruct.GPIO_Pin = GPIO_Pin_4;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPD;
    GPIO_Init(GPIOA, &GPIO_InitStruct);
				 
    GPIO_InitStruct.GPIO_Pin = GPIO_Pin_5;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPD;
    GPIO_Init(GPIOA, &GPIO_InitStruct);
 
		GPIO_InitStruct.GPIO_Pin = GPIO_Pin_6;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPD;
    GPIO_Init(GPIOA, &GPIO_InitStruct);
	
		GPIO_InitStruct.GPIO_Pin = GPIO_Pin_7;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPD;
    GPIO_Init(GPIOA, &GPIO_InitStruct);
		
		/******************OUTPUT PIN CONFIG*************************************/
		
		GPIO_InitStruct.GPIO_Pin = GPIO_Pin_9;              // LIGHT 1
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_Init(GPIOB, &GPIO_InitStruct);
				 
    GPIO_InitStruct.GPIO_Pin = GPIO_Pin_8;							// LIGHT 2	
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_Init(GPIOB, &GPIO_InitStruct);
 
		GPIO_InitStruct.GPIO_Pin = GPIO_Pin_7;							// LIGHT 3		
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_Init(GPIOB, &GPIO_InitStruct);
	
		GPIO_InitStruct.GPIO_Pin = GPIO_Pin_6;							// LIGHT 4
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_Init(GPIOB, &GPIO_InitStruct);
		
		GPIO_InitStruct.GPIO_Pin = GPIO_Pin_12;							// LIGHT 5			
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_Init(GPIOA, &GPIO_InitStruct);
				 
    GPIO_InitStruct.GPIO_Pin = GPIO_Pin_11;							// LIGHT 6
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_Init(GPIOA, &GPIO_InitStruct);
 
		GPIO_InitStruct.GPIO_Pin = GPIO_Pin_10;							// LIGHT 7
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_Init(GPIOA, &GPIO_InitStruct);
	
		GPIO_InitStruct.GPIO_Pin = GPIO_Pin_9;							// LIGHT 8
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_Init(GPIOA, &GPIO_InitStruct);
		
    while (1)
    {
			
		
        
        if ((GPIO_ReadInputData(GPIOA) & GPIO_Pin_0)&&(GPIO_ReadInputData(GPIOA) & GPIO_Pin_1)&&(GPIO_ReadInputData(GPIOA) & GPIO_Pin_2)&&(GPIO_ReadInputData(GPIOA) & GPIO_Pin_3)&&(GPIO_ReadInputData(GPIOA) & GPIO_Pin_4)&&(GPIO_ReadInputData(GPIOA) & GPIO_Pin_5)&&(GPIO_ReadInputData(GPIOA) & GPIO_Pin_6)&&(GPIO_ReadInputData(GPIOA) & GPIO_Pin_7))
        {
				  GPIO_SetBits(GPIOB, GPIO_Pin_9);
					GPIO_SetBits(GPIOB, GPIO_Pin_8);
					GPIO_SetBits(GPIOB, GPIO_Pin_7);
					GPIO_SetBits(GPIOB, GPIO_Pin_6);
					GPIO_SetBits(GPIOA, GPIO_Pin_12);
					GPIO_SetBits(GPIOA, GPIO_Pin_11);
					GPIO_SetBits(GPIOA, GPIO_Pin_10);
					GPIO_SetBits(GPIOA, GPIO_Pin_9);
        }

        else if  (!(GPIO_ReadInputData(GPIOA) & GPIO_Pin_0))
        {
          GPIO_ResetBits(GPIOB, GPIO_Pin_9);
					GPIO_ResetBits(GPIOB, GPIO_Pin_8);
					GPIO_ResetBits(GPIOB, GPIO_Pin_7);
					GPIO_SetBits(GPIOB, GPIO_Pin_6);
					GPIO_SetBits(GPIOA, GPIO_Pin_12);
					GPIO_SetBits(GPIOA, GPIO_Pin_11);
					GPIO_SetBits(GPIOA, GPIO_Pin_10);
					GPIO_SetBits(GPIOA, GPIO_Pin_9);
        }
					
				

		    else if (!(GPIO_ReadInputData(GPIOA) & GPIO_Pin_1))
        {
				  GPIO_SetBits(GPIOB, GPIO_Pin_9);
					GPIO_ResetBits(GPIOB, GPIO_Pin_8);
					GPIO_ResetBits(GPIOB, GPIO_Pin_7);
					GPIO_ResetBits(GPIOB, GPIO_Pin_6);
					GPIO_SetBits(GPIOA, GPIO_Pin_12);
					GPIO_SetBits(GPIOA, GPIO_Pin_11);
					GPIO_SetBits(GPIOA, GPIO_Pin_10);
					GPIO_SetBits(GPIOA, GPIO_Pin_9);
        }
				else if (!(GPIO_ReadInputData(GPIOA) & GPIO_Pin_1)&&(GPIO_ReadInputData(GPIOA) & GPIO_Pin_0))
        {
				  GPIO_ResetBits(GPIOB, GPIO_Pin_9);
					GPIO_ResetBits(GPIOB, GPIO_Pin_8);
					GPIO_ResetBits(GPIOB, GPIO_Pin_7);
					GPIO_ResetBits(GPIOB, GPIO_Pin_6);
					GPIO_SetBits(GPIOA, GPIO_Pin_12);
					GPIO_SetBits(GPIOA, GPIO_Pin_11);
					GPIO_SetBits(GPIOA, GPIO_Pin_10);
					GPIO_SetBits(GPIOA, GPIO_Pin_9);
        }
				
				
				else if (!(GPIO_ReadInputData(GPIOA) & GPIO_Pin_2))
        {
				  GPIO_SetBits(GPIOB, GPIO_Pin_9);
					GPIO_SetBits(GPIOB, GPIO_Pin_8);
					GPIO_ResetBits(GPIOB, GPIO_Pin_7);
					GPIO_ResetBits(GPIOB, GPIO_Pin_6);
					GPIO_ResetBits(GPIOA, GPIO_Pin_12);
					GPIO_SetBits(GPIOA, GPIO_Pin_11);
					GPIO_SetBits(GPIOA, GPIO_Pin_10);
					GPIO_SetBits(GPIOA, GPIO_Pin_9);
				}
				else if (!(GPIO_ReadInputData(GPIOA) & GPIO_Pin_2)&&(GPIO_ReadInputData(GPIOA) & GPIO_Pin_1))
        {
				  GPIO_SetBits(GPIOB, GPIO_Pin_9);
					GPIO_ResetBits(GPIOB, GPIO_Pin_8);
					GPIO_ResetBits(GPIOB, GPIO_Pin_7);
					GPIO_ResetBits(GPIOB, GPIO_Pin_6);
					GPIO_ResetBits(GPIOA, GPIO_Pin_12);
					GPIO_SetBits(GPIOA, GPIO_Pin_11);
					GPIO_SetBits(GPIOA, GPIO_Pin_10);
					GPIO_SetBits(GPIOA, GPIO_Pin_9);
				}
				
					else if (!(GPIO_ReadInputData(GPIOA) & GPIO_Pin_3))
        {
				  GPIO_SetBits(GPIOB, GPIO_Pin_9);
					GPIO_SetBits(GPIOB, GPIO_Pin_8);
					GPIO_SetBits(GPIOB, GPIO_Pin_7);
					GPIO_ResetBits(GPIOB, GPIO_Pin_6);
					GPIO_ResetBits(GPIOA, GPIO_Pin_12);
					GPIO_ResetBits(GPIOA, GPIO_Pin_11);
					GPIO_SetBits(GPIOA, GPIO_Pin_10);
					GPIO_SetBits(GPIOA, GPIO_Pin_9);
					
				}
					else if (!(GPIO_ReadInputData(GPIOA) & GPIO_Pin_3)&&(GPIO_ReadInputData(GPIOA) & GPIO_Pin_2))
        {
				  GPIO_SetBits(GPIOB, GPIO_Pin_9);
					GPIO_SetBits(GPIOB, GPIO_Pin_8);
					GPIO_ResetBits(GPIOB, GPIO_Pin_7);
					GPIO_ResetBits(GPIOB, GPIO_Pin_6);
					GPIO_ResetBits(GPIOA, GPIO_Pin_12);
					GPIO_ResetBits(GPIOA, GPIO_Pin_11);
					GPIO_SetBits(GPIOA, GPIO_Pin_10);
					GPIO_SetBits(GPIOA, GPIO_Pin_9);
					
				}
				
					
					else if (!(GPIO_ReadInputData(GPIOA) & GPIO_Pin_4))
        {
				  GPIO_SetBits(GPIOB, GPIO_Pin_9);
					GPIO_SetBits(GPIOB, GPIO_Pin_8);
					GPIO_SetBits(GPIOB, GPIO_Pin_7);
					GPIO_SetBits(GPIOB, GPIO_Pin_6);
					GPIO_ResetBits(GPIOA, GPIO_Pin_12);
					GPIO_ResetBits(GPIOA, GPIO_Pin_11);
					GPIO_ResetBits(GPIOA, GPIO_Pin_10);
					GPIO_SetBits(GPIOA, GPIO_Pin_9);
				}
					else if (!(GPIO_ReadInputData(GPIOA) & GPIO_Pin_4)&&(GPIO_ReadInputData(GPIOA) & GPIO_Pin_3))
        {
				  GPIO_SetBits(GPIOB, GPIO_Pin_9);
					GPIO_SetBits(GPIOB, GPIO_Pin_8);
					GPIO_SetBits(GPIOB, GPIO_Pin_7);
					GPIO_ResetBits(GPIOB, GPIO_Pin_6);
					GPIO_ResetBits(GPIOA, GPIO_Pin_12);
					GPIO_ResetBits(GPIOA, GPIO_Pin_11);
					GPIO_ResetBits(GPIOA, GPIO_Pin_10);
					GPIO_SetBits(GPIOA, GPIO_Pin_9);
				}
									
					else if (!(GPIO_ReadInputData(GPIOA) & GPIO_Pin_5))
        {
				  GPIO_SetBits(GPIOB, GPIO_Pin_9);
					GPIO_SetBits(GPIOB, GPIO_Pin_8);
					GPIO_SetBits(GPIOB, GPIO_Pin_7);
					GPIO_SetBits(GPIOB, GPIO_Pin_6);
					GPIO_SetBits(GPIOA, GPIO_Pin_12);
					GPIO_ResetBits(GPIOA, GPIO_Pin_11);
					GPIO_ResetBits(GPIOA, GPIO_Pin_10);
					GPIO_ResetBits(GPIOA, GPIO_Pin_9);
				}
				else if (!(GPIO_ReadInputData(GPIOA) & GPIO_Pin_5)&&(GPIO_ReadInputData(GPIOA) & GPIO_Pin_4))
        {
				  GPIO_SetBits(GPIOB, GPIO_Pin_9);
					GPIO_SetBits(GPIOB, GPIO_Pin_8);
					GPIO_SetBits(GPIOB, GPIO_Pin_7);
					GPIO_SetBits(GPIOB, GPIO_Pin_6);
					GPIO_ResetBits(GPIOA, GPIO_Pin_12);
					GPIO_ResetBits(GPIOA, GPIO_Pin_11);
					GPIO_ResetBits(GPIOA, GPIO_Pin_10);
					GPIO_ResetBits(GPIOA, GPIO_Pin_9);
				}
									
					else if (!(GPIO_ReadInputData(GPIOA) & GPIO_Pin_6))
        {
				  GPIO_SetBits(GPIOB, GPIO_Pin_9);
					GPIO_SetBits(GPIOB, GPIO_Pin_8);
					GPIO_SetBits(GPIOB, GPIO_Pin_7);
					GPIO_SetBits(GPIOB, GPIO_Pin_6);
					GPIO_SetBits(GPIOA, GPIO_Pin_12);
					GPIO_SetBits(GPIOA, GPIO_Pin_11);
					GPIO_ResetBits(GPIOA, GPIO_Pin_10);
					GPIO_ResetBits(GPIOA, GPIO_Pin_9);
				}	
					else if (!(GPIO_ReadInputData(GPIOA) & GPIO_Pin_6)&&(GPIO_ReadInputData(GPIOA) & GPIO_Pin_5))
        {
				  GPIO_SetBits(GPIOB, GPIO_Pin_9);
					GPIO_SetBits(GPIOB, GPIO_Pin_8);
					GPIO_SetBits(GPIOB, GPIO_Pin_7);
					GPIO_SetBits(GPIOB, GPIO_Pin_6);
					GPIO_SetBits(GPIOA, GPIO_Pin_12);
					GPIO_ResetBits(GPIOA, GPIO_Pin_11);
					GPIO_ResetBits(GPIOA, GPIO_Pin_10);
					GPIO_ResetBits(GPIOA, GPIO_Pin_9);
				}
					else if (!(GPIO_ReadInputData(GPIOA) & GPIO_Pin_7))
        {
				  GPIO_SetBits(GPIOB, GPIO_Pin_9);
					GPIO_SetBits(GPIOB, GPIO_Pin_8);
					GPIO_SetBits(GPIOB, GPIO_Pin_7);
					GPIO_SetBits(GPIOB, GPIO_Pin_6);
					GPIO_SetBits(GPIOA, GPIO_Pin_12);
					GPIO_SetBits(GPIOA, GPIO_Pin_11);
					GPIO_SetBits(GPIOA, GPIO_Pin_10);
					GPIO_ResetBits(GPIOA, GPIO_Pin_9); 
				}
				else if (!(GPIO_ReadInputData(GPIOA) & GPIO_Pin_7)&&(GPIO_ReadInputData(GPIOA) & GPIO_Pin_6))
        {
				  GPIO_SetBits(GPIOB, GPIO_Pin_9);
					GPIO_SetBits(GPIOB, GPIO_Pin_8);
					GPIO_SetBits(GPIOB, GPIO_Pin_7);
					GPIO_SetBits(GPIOB, GPIO_Pin_6);
					GPIO_SetBits(GPIOA, GPIO_Pin_12);
					GPIO_SetBits(GPIOA, GPIO_Pin_11);
					GPIO_ResetBits(GPIOA, GPIO_Pin_10);
					GPIO_ResetBits(GPIOA, GPIO_Pin_9); 
				}
					else 
						{
					       
					GPIO_ResetBits(GPIOB, GPIO_Pin_9);
					GPIO_ResetBits(GPIOB, GPIO_Pin_8);
					GPIO_ResetBits(GPIOB, GPIO_Pin_7);
					GPIO_ResetBits(GPIOB, GPIO_Pin_6);
					GPIO_ResetBits(GPIOA, GPIO_Pin_12);
					GPIO_ResetBits(GPIOA, GPIO_Pin_11);
					GPIO_ResetBits(GPIOA, GPIO_Pin_10);
					GPIO_ResetBits(GPIOA, GPIO_Pin_9);
					}
					
				}
		}
