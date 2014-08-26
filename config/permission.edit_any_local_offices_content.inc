<?php
/**
 * @file
 * permission.edit_any_local_offices_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any local_offices content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.local_offices' => 'content_type.local_offices',
);

$optional = array();

$modules = array(
  0 => 'node',
);
