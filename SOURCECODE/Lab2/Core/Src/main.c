/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "software_timer.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
TIM_HandleTypeDef htim2;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_TIM2_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM2_Init();
  /* USER CODE BEGIN 2 */
HAL_TIM_Base_Start_IT(&htim2);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
/////////////////////////////////////////////////
  void OnP_A(){
	  HAL_GPIO_WritePin (P_A_GPIO_Port, P_A_Pin, GPIO_PIN_RESET);
  }
  void OnP_B(){
	  HAL_GPIO_WritePin (P_B_GPIO_Port, P_B_Pin, GPIO_PIN_RESET);
  }
  void OnP_C(){
	  HAL_GPIO_WritePin (P_C_GPIO_Port, P_C_Pin, GPIO_PIN_RESET);
  }
  void OnP_D(){
	  HAL_GPIO_WritePin (P_D_GPIO_Port, P_D_Pin, GPIO_PIN_RESET);
  }
  void OnP_E(){
	  HAL_GPIO_WritePin (P_E_GPIO_Port, P_E_Pin, GPIO_PIN_RESET);
  }
  void OnP_F(){
	  HAL_GPIO_WritePin (P_F_GPIO_Port, P_F_Pin, GPIO_PIN_RESET);
  }
  void OnP_G(){
	  HAL_GPIO_WritePin (P_G_GPIO_Port, P_G_Pin, GPIO_PIN_RESET);
  }

/////////////////////////////////////////////////
  void OffP_A(){
	  HAL_GPIO_WritePin (P_A_GPIO_Port, P_A_Pin, GPIO_PIN_SET);
  }
  void OffP_B(){
	  HAL_GPIO_WritePin (P_B_GPIO_Port, P_B_Pin, GPIO_PIN_SET);
  }
  void OffP_C(){
	  HAL_GPIO_WritePin (P_C_GPIO_Port, P_C_Pin, GPIO_PIN_SET);
  }
  void OffP_D(){
	  HAL_GPIO_WritePin (P_D_GPIO_Port, P_D_Pin, GPIO_PIN_SET);
  }
  void OffP_E(){
	  HAL_GPIO_WritePin (P_E_GPIO_Port, P_E_Pin, GPIO_PIN_SET);
  }
  void OffP_F(){
	  HAL_GPIO_WritePin (P_F_GPIO_Port, P_F_Pin, GPIO_PIN_SET);
  }
  void OffP_G(){
	  HAL_GPIO_WritePin (P_G_GPIO_Port, P_G_Pin, GPIO_PIN_SET);
  }

/////////////////////////////////////////////////
  void display7SEG(int num){
	  switch (num) {
	      case 0:
	    	  OnP_A();
	    	  OnP_B();
	    	  OnP_C();
	    	  OnP_D();
	    	  OnP_E();
	    	  OnP_F();
	    	  OffP_G();
	          break;
	      case 1:
	    	  OffP_A();
	    	  OnP_B();
	    	  OnP_C();
	    	  OffP_D();
	    	  OffP_E();
	    	  OffP_F();
	    	  OffP_G();
	          break;
	      case 2:
	    	  OnP_A();
	    	  OnP_B();
	    	  OffP_C();
	    	  OnP_D();
	    	  OnP_E();
	    	  OffP_F();
	    	  OnP_G();
	          break;
	      case 3:
	    	  OnP_A();
	    	  OnP_B();
	    	  OnP_C();
	    	  OnP_D();
	    	  OffP_E();
	    	  OffP_F();
	    	  OnP_G();
	          break;
	      case 4:
	    	  OffP_A();
	    	  OnP_B();
	    	  OnP_C();
	    	  OffP_D();
	    	  OffP_E();
	    	  OnP_F();
	    	  OnP_G();
	          break;
	      case 5:
	    	  OnP_A();
	    	  OffP_B();
	    	  OnP_C();
	    	  OnP_D();
	    	  OffP_E();
	    	  OnP_F();
	    	  OnP_G();
	          break;
	      case 6:
	    	  OnP_A();
	    	  OffP_B();
	    	  OnP_C();
	    	  OnP_D();
	    	  OnP_E();
	    	  OnP_F();
	    	  OnP_G();
	          break;
	      case 7:
	    	  OnP_A();
	    	  OnP_B();
	    	  OnP_C();
	    	  OffP_D();
	    	  OffP_E();
	    	  OffP_F();
	    	  OffP_G();
	          break;
	      case 8:
	    	  OnP_A();
	    	  OnP_B();
	    	  OnP_C();
	    	  OnP_D();
	    	  OnP_E();
	    	  OnP_F();
	    	  OnP_G();
	          break;
	      case 9:
	    	  OnP_A();
	    	  OnP_B();
	    	  OnP_C();
	    	  OnP_D();
	    	  OffP_E();
	    	  OnP_F();
	    	  OnP_G();
	          break;
	      default:
	    	  OnP_A();
	    	  OnP_B();
	    	  OnP_C();
	    	  OnP_D();
	    	  OnP_E();
	    	  OnP_F();
	    	  OffP_G();
	    	  break;
	  }

  }
  ///////////////////////////////////////////
  void OnEN(int i){
	  switch(i){
	  	  case 0:
	  		  HAL_GPIO_WritePin (EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
	  		  break;
	  	  case 1:
	  		  HAL_GPIO_WritePin (EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
	  		  break;
	  	  case 2:
	  		  HAL_GPIO_WritePin (EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
	  		  break;
	  	  case 3:
	  		  HAL_GPIO_WritePin (EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
	  		  break;
	  	  default:
	  		  HAL_GPIO_WritePin (EN0_GPIO_Port, EN0_Pin, GPIO_PIN_RESET);
	  		  break;
	  }
  }
  void OffEN(int i){
	  switch(i){
	  	  case 0:
	  		  HAL_GPIO_WritePin (EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
	  		  break;
	  	  case 1:
	  		  HAL_GPIO_WritePin (EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
	  		  break;
	  	  case 2:
	  		  HAL_GPIO_WritePin (EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
	  		  break;
	  	  case 3:
	  		  HAL_GPIO_WritePin (EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
	  		  break;
	  	  default:
	  		  HAL_GPIO_WritePin (EN0_GPIO_Port, EN0_Pin, GPIO_PIN_SET);
	  		  break;
	  }
  }
  ///////////////////////////////////////////
  void TurnOffAll7LEDs(){
	  OffEN(0);
	  OffEN(1);
	  OffEN(2);
	  OffEN(3);
  }
  ///////////////////////////////////////////
	void ToggleLedRed(){
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	}
	void ToggleP_DOT(){
		HAL_GPIO_TogglePin(P_DOT_GPIO_Port, P_DOT_Pin);
	}
///////////////////////////////////////////
	//const int MAX_LED = 4;
	int index_led = 1;
	int led_buffer[4] = {1, 2, 3, 4};
	void update7SEG(int index){
	    switch (index){
	        case 0:
	            //Display the first 7SEG with led_buffer[0]
	        	TurnOffAll7LEDs();
	        	display7SEG(led_buffer[0]);
	            break;
	        case 1:
	            //Display the second 7SEG with led_buffer[1]
	        	TurnOffAll7LEDs();
	        	display7SEG(led_buffer[1]);
	            break;
	        case 2:
	            //Display the third 7SEG with led_buffer[2]
	        	TurnOffAll7LEDs();
	        	display7SEG(led_buffer[2]);
	            break;
	        case 3:
	            //Display the forth 7SEG with led_buffer[3]
	        	TurnOffAll7LEDs();
	        	display7SEG(led_buffer[3]);
	            break;
	        default:
	        	TurnOffAll7LEDs();
	        	display7SEG(led_buffer[0]);
	            break;
	    }
    	OnEN(index);
	}
///////////////////////////////////////////
	const int c1_number = 100; // 100=1s
	const int c2_number = 25; // 100=1s
	setTimer1(c1_number);
	setTimer2(c2_number);

	TurnOffAll7LEDs();
	update7SEG(0);
  while (1)
  {
	  if(timer1_flag==1){
		  ToggleLedRed();
		  ToggleP_DOT();
		  setTimer1(c1_number);
	  }
	  if(timer2_flag==1){
		  if(index_led>3){
			  index_led=0;
		  }
		  update7SEG(index_led++);
		  setTimer2(c2_number);
	  }
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief TIM2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */

  /* USER CODE END TIM2_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM2_Init 1 */

  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 7999;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 9;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */

  /* USER CODE END TIM2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, P_DOT_Pin|LED_RED_Pin|EN0_Pin|EN1_Pin
                          |EN2_Pin|EN3_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, P_A_Pin|P_B_Pin|P_C_Pin|P_D_Pin
                          |P_E_Pin|P_F_Pin|P_G_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : P_DOT_Pin LED_RED_Pin EN0_Pin EN1_Pin
                           EN2_Pin EN3_Pin */
  GPIO_InitStruct.Pin = P_DOT_Pin|LED_RED_Pin|EN0_Pin|EN1_Pin
                          |EN2_Pin|EN3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : P_A_Pin P_B_Pin P_C_Pin P_D_Pin
                           P_E_Pin P_F_Pin P_G_Pin */
  GPIO_InitStruct.Pin = P_A_Pin|P_B_Pin|P_C_Pin|P_D_Pin
                          |P_E_Pin|P_F_Pin|P_G_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
	timerRun();
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
