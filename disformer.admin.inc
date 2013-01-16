<?php

/**
 * @file
 * Provides administrative forms for disformer.module
 */

/**
 * Administrative settings form for disformer.
 */
function disformer_admin_settings_form($form, &$form_state) {
  $form['disformer_form_ids'] = array(
    '#type' => 'textarea',
    '#title' => t('Enable Disformer on the following forms'),
    '#description' => t('Put each form id on a separate line. (Example: user_register_form, user_login)'),
    '#default_value' => variable_get('disformer_form_ids', ''),
  );
  $form['disformer_delay'] = array(
    '#type' => 'textfield',
    '#title' => t('Delay'),
    '#description' => t('The time to wait before showing the "Sending ..." overlay'),
    '#default_value' => variable_get('disformer_delay', 1000),
  );
  $form['disformer_opacity'] = array(
    '#type' => 'textfield',
    '#title' => t('Opacity'),
    '#description' => t('The opacity of the disabled form.'),
    '#default_value' => variable_get('disformer_opacity', 0.5),
  );
  $form['disformer_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Text in overlay'),
    '#description' => t('This text is shown to the user after the submit button is pressed. If left blank, it will default to "Sending ..." with translation ability.'),
    '#default_value' => variable_get('disformer_text', 'Sending ...'),
  );
  $form['disformer_debug'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable debugging mode.'),
    '#description' => t('Disables the submission of the form so you can style elements.'),
    '#default_value' => variable_get('disformer_debug', FALSE),
  );
  return system_settings_form($form);
}