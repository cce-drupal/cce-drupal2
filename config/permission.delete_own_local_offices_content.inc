<?php
/**
 * @file
 * permission.delete_own_local_offices_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own local_offices content',
  'roles' => array(
    0 => 'feeds',
  ),
);

$dependencies = array(
  'content_type.local_offices' => 'content_type.local_offices',
);

$optional = array();

$modules = array(
  0 => 'node',
);
