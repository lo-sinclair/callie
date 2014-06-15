<?php

/**
 * @file
 * Administration interfaces.
 */

/**
 * Main settings of the module.
 */
function callie_settings() {

  $form['callie_btn_selector'] = array(
    '#type' => 'textfield',
    '#title' => t('Selector'),
    '#description' => t('Селектор кнопки'),
    '#default_value' => variable_get('callie_btn_selector', 'call-btn'),
    '#size' => 60,
    '#maxlength' => 128,
    '#required' => TRUE,
  );
  

  return system_settings_form($form);
}