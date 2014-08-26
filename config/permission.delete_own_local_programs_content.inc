<?php
/**
 * @file
 * permission.delete_own_local_programs_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own local_programs content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.local_programs' => 'content_type.local_programs',
);

$optional = array();

$modules = array(
  0 => 'node',
);
