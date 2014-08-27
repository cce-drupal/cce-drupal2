<?php
/**
 * @file
 * cce_feeds.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cce_feeds_user_default_roles() {
  $roles = array();

  // Exported role: feeds.
  $roles['feeds'] = array(
    'name' => 'feeds',
    'weight' => 3,
  );

  return $roles;
}
