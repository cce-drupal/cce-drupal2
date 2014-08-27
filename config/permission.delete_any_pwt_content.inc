<?php
/**
 * @file
 * permission.delete_any_pwt_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any pwt content',
  'roles' => array(
    0 => 'feeds',
  ),
);

$dependencies = array(
  'content_type.pwt' => 'content_type.pwt',
);

$optional = array();

$modules = array(
  0 => 'node',
);
