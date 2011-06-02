<?php

// A form to handle storage of the Tender App SSO settings.
function tenderapp_sso_settings() {

  $form['tenderapp_sso_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Link'),
    '#description' => t('Your tender link http://yourapp.tender.com'),
    '#default_value' => variable_get('tenderapp_sso_link', NULL),
  );
  $form['tenderapp_sso_sso_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Site Key'),
    '#description' => t('Your Tender site Key'),
    '#default_value' => variable_get('tenderapp_sso_sso_key', NULL),
  );
  $form['tenderapp_sso_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Tender SSO API Key'),
    '#description' => t('Your Tender SSO API Key'),
    '#default_value' => variable_get('tenderapp_sso_api_key', NULL),
  );
  $form['tenderapp_sso_anchor_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Anchor Text'),
    '#description' => t('The visible text between the anchor element'),
    '#default_value' => variable_get('tenderapp_sso_anchor_text', 'Support'),
  );

  return system_settings_form($form);
}