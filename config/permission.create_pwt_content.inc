<?php
/**
 * @file
 * permission.create_pwt_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create pwt content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.pwt' => 'content_type.pwt',
);

$optional = array();

$modules = array(
  0 => 'node',
);
