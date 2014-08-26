<?php
/**
 * @file
 * permission.delete_any_news_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any news content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.news' => 'content_type.news',
);

$optional = array();

$modules = array(
  0 => 'node',
);
