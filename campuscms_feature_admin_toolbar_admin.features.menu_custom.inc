<?php
/**
 * @file
 * campuscms_feature_admin_toolbar_admin.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function campuscms_feature_admin_toolbar_admin_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-toolbar-administrator
  $menus['menu-toolbar-administrator'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'title' => 'Toolbar - Administrator',
    'description' => 'This is the administration toolbar for adminstrators.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('This is the administration toolbar for adminstrators.');
  t('Toolbar - Administrator');


  return $menus;
}
