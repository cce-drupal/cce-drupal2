<?php
/**
 * @file
 * permission.delete_any_hero_slide_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any hero_slide content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.hero_slide' => 'content_type.hero_slide',
);

$optional = array();

$modules = array(
  0 => 'node',
);
