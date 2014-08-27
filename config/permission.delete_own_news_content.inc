<?php
/**
 * @file
 * permission.delete_own_news_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own news content',
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
