<?php

/**
 * @file
 * Provides variable declarations.
 */

/**
 * Implements hook_variable_info().
 */
function disformer_variable_info($options) {
  $variable['disformer_form_ids'] = array(
    'title' => t('Disformer Form IDs', array(), $options),
    'description' => t('Form ID with Disformer enabled on them.'),
    'type' => 'string',
    'access' => 'administer disformer',
    'default' => '',
  );
  $variable['disformer_delay'] = array(
    'title' => t('Disformer Delay', array(), $options),
    'description' => t('The time to wait before showing the "Sending ..." overlay'),
    'type' => 'number',
    'access' => 'administer disformer',
    'default' => 1000,
  );
  $variable['disformer_opacity'] = array(
    'title' => t('Disformer Opacity', array(), $options),
    'description' => t('The opacity of the disabled form.'),
    'type' => 'number',
    'access' => 'administer disformer',
    'default' => 0.5,
  );
  $variable['disformer_text'] = array(
    'title' => t('Disformer Text in overlay', array(), $options),
    'description' => t('This text is shown to the user after the submit button is pressed.'),
    'type' => 'string',
    'access' => 'administer disformer',
    'default' => '',
  );
  $variable['disformer_debug'] = array(
    'title' => t('Disformer Debugging Mode', array(), $options),
    'description' => t('Disables the submission of the form so you can style elements.'),
    'type' => 'boolean',
    'access' => 'administer disformer',
    'default' => FALSE,
  );
  $variable['disformer_form_helper'] = array(
    'title' => t('Disformer Form Helper', array(), $options),
    'description' => t('Displays the form id to users with the "administer disformer" permissions.'),
    'type' => 'boolean',
    'access' => 'administer disformer',
    'default' => FALSE,
  );
  return $variable;
}