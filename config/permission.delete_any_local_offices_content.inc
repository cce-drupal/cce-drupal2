<?php
/**
 * @file
 * permission.delete_any_local_offices_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any local_offices content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.local_offices' => 'content_type.local_offices',
);

$optional = array();

$modules = array(
  0 => 'node',
);
