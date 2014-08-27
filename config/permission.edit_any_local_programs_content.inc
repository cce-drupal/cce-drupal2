<?php
/**
 * @file
 * permission.edit_any_local_programs_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any local_programs content',
  'roles' => array(
    0 => 'feeds',
  ),
);

$dependencies = array(
  'content_type.local_programs' => 'content_type.local_programs',
);

$optional = array();

$modules = array(
  0 => 'node',
);
