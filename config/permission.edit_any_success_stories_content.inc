<?php
/**
 * @file
 * permission.edit_any_success_stories_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any success_stories content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.success_stories' => 'content_type.success_stories',
);

$optional = array();

$modules = array(
  0 => 'node',
);
