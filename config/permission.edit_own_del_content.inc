<?php
/**
 * @file
 * permission.edit_own_del_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own del content',
  'roles' => array(
    0 => 'feeds',
  ),
);

$dependencies = array(
  'content_type.del' => 'content_type.del',
);

$optional = array();

$modules = array(
  0 => 'node',
);
