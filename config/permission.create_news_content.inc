<?php
/**
 * @file
 * permission.create_news_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create news content',
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
