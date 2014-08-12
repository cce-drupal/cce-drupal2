<?php
/**
 * @file
 * permission.edit_any_news_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any news content',
  'roles' => array(
    0 => 'feeds',
  ),
);

$dependencies = array(
  'content_type.news' => 'content_type.news',
);

$optional = array();

$modules = array(
  0 => 'node',
);
