<?php
/**
 * @file
 * permission.delete_own_del_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own del content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.del' => 'content_type.del',
);

$optional = array();

$modules = array(
  0 => 'node',
);
