<?php
/**
 * @file
 * permission.create_success_stories_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create success_stories content',
  'roles' => array(
    0 => 'feeds',
  ),
);

$dependencies = array(
  'content_type.success_stories' => 'content_type.success_stories',
);

$optional = array();

$modules = array(
  0 => 'node',
);
