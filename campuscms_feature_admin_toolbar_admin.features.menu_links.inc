<?php
/**
 * @file
 * campuscms_feature_admin_toolbar_admin.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function campuscms_feature_admin_toolbar_admin_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-toolbar-administrator:<front>
  $menu_links['menu-toolbar-administrator:<front>'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-toolbar-administrator:admin/appearance
  $menu_links['menu-toolbar-administrator:admin/appearance'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/appearance',
    'router_path' => 'admin/appearance',
    'link_title' => 'Appearance',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: menu-toolbar-administrator:admin/config
  $menu_links['menu-toolbar-administrator:admin/config'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/config',
    'router_path' => 'admin/config',
    'link_title' => 'Configuration',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-toolbar-administrator:admin/config/media/image-styles
  $menu_links['menu-toolbar-administrator:admin/config/media/image-styles'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/config/media/image-styles',
    'router_path' => 'admin/config/media/image-styles',
    'link_title' => 'Image Styles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: menu-toolbar-administrator:admin/config/search/path
  $menu_links['menu-toolbar-administrator:admin/config/search/path'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/config/search/path',
    'router_path' => 'admin/config/search/path',
    'link_title' => 'URL Aliases',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: menu-toolbar-administrator:admin/config/search/redirect
  $menu_links['menu-toolbar-administrator:admin/config/search/redirect'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/config/search/redirect',
    'router_path' => 'admin/config/search/redirect',
    'link_title' => 'URL Redirects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: menu-toolbar-administrator:admin/config/system/site-information
  $menu_links['menu-toolbar-administrator:admin/config/system/site-information'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Site Information',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: menu-toolbar-administrator:admin/content
  $menu_links['menu-toolbar-administrator:admin/content'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Manage Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-toolbar-administrator:admin/modules
  $menu_links['menu-toolbar-administrator:admin/modules'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/modules',
    'router_path' => 'admin/modules',
    'link_title' => 'Modules',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: menu-toolbar-administrator:admin/people
  $menu_links['menu-toolbar-administrator:admin/people'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-toolbar-administrator:admin/people/all
  $menu_links['menu-toolbar-administrator:admin/people/all'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/people/all',
    'router_path' => 'admin/people',
    'link_title' => 'Manage',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/people',
  );
  // Exported menu link: menu-toolbar-administrator:admin/people/create
  $menu_links['menu-toolbar-administrator:admin/people/create'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/people/create',
    'router_path' => 'admin/people/create',
    'link_title' => 'Add',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/people',
  );
  // Exported menu link: menu-toolbar-administrator:admin/people/permissions
  $menu_links['menu-toolbar-administrator:admin/people/permissions'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/people/permissions',
    'router_path' => 'admin/people/permissions',
    'link_title' => 'Permissions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/people',
  );
  // Exported menu link: menu-toolbar-administrator:admin/people/permissions/roles
  $menu_links['menu-toolbar-administrator:admin/people/permissions/roles'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/people/permissions/roles',
    'router_path' => 'admin/people/permissions/roles',
    'link_title' => 'Roles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/people',
  );
  // Exported menu link: menu-toolbar-administrator:admin/reports
  $menu_links['menu-toolbar-administrator:admin/reports'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/reports',
    'router_path' => 'admin/reports',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: menu-toolbar-administrator:admin/structure
  $menu_links['menu-toolbar-administrator:admin/structure'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/structure',
    'router_path' => 'admin/structure',
    'link_title' => 'Structure',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-toolbar-administrator:admin/structure/block
  $menu_links['menu-toolbar-administrator:admin/structure/block'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/structure/block',
    'router_path' => 'admin/structure/block',
    'link_title' => 'Blocks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: menu-toolbar-administrator:admin/structure/features
  $menu_links['menu-toolbar-administrator:admin/structure/features'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/structure/features',
    'router_path' => 'admin/structure/features',
    'link_title' => 'Features',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: menu-toolbar-administrator:admin/structure/menu
  $menu_links['menu-toolbar-administrator:admin/structure/menu'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-toolbar-administrator:admin/structure/menu/manage/main-menu
  $menu_links['menu-toolbar-administrator:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-toolbar-administrator:admin/structure/menu/manage/menu-center-footer
  $menu_links['menu-toolbar-administrator:admin/structure/menu/manage/menu-center-footer'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/structure/menu/manage/menu-center-footer',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Center Footer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-toolbar-administrator:admin/structure/menu/manage/menu-right-footer
  $menu_links['menu-toolbar-administrator:admin/structure/menu/manage/menu-right-footer'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/structure/menu/manage/menu-right-footer',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Right Footer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-toolbar-administrator:admin/structure/types
  $menu_links['menu-toolbar-administrator:admin/structure/types'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/structure/types',
    'router_path' => 'admin/structure/types',
    'link_title' => 'Content Types',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: menu-toolbar-administrator:admin/structure/views
  $menu_links['menu-toolbar-administrator:admin/structure/views'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/structure/views',
    'router_path' => 'admin/structure/views',
    'link_title' => 'Views',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: menu-toolbar-administrator:caslogout
  $menu_links['menu-toolbar-administrator:caslogout'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'caslogout',
    'router_path' => 'caslogout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Exported menu link: menu-toolbar-administrator:node/add
  $menu_links['menu-toolbar-administrator:node/add'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add');
  t('Add Content');
  t('Appearance');
  t('Blocks');
  t('Center Footer');
  t('Configuration');
  t('Content Types');
  t('Features');
  t('Home');
  t('Image Styles');
  t('Logout');
  t('Main menu');
  t('Manage');
  t('Manage Content');
  t('Menus');
  t('Modules');
  t('People');
  t('Permissions');
  t('Reports');
  t('Right Footer');
  t('Roles');
  t('Site Information');
  t('Structure');
  t('URL Aliases');
  t('URL Redirects');
  t('Views');


  return $menu_links;
}
