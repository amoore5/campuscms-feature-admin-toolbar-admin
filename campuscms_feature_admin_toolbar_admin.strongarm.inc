<?php
/**
 * @file
 * campuscms_feature_admin_toolbar_admin.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function campuscms_feature_admin_toolbar_admin_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quickbar_extras_settings_administrator';
  $strongarm->value = array(
    'menu' => array(
      'mlid_125' => 'left',
      'mlid_341' => 'left',
      'mlid_342' => 'left',
      'mlid_387' => 'left',
      'mlid_375' => 'left',
      'mlid_343' => 'left',
      'mlid_380' => 'left',
      'mlid_391' => 'left',
      'mlid_340' => 'right',
    ),
    'show_username' => 1,
    'show_username_prefix' => 'Hello, ',
    'show_username_suffix' => '',
    'show_username_link' => 1,
  );
  $export['quickbar_extras_settings_administrator'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'quickbar_settings_administrator';
  $strongarm->value = array(
    'iconset' => 'quickbar',
    'sticky' => 0,
    'float' => 0,
    'secondary_menu_visibility' => 0,
    'nofollow' => 0,
  );
  $export['quickbar_settings_administrator'] = $strongarm;

  return $export;
}
