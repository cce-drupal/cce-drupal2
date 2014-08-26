<?php
/**
 * @file
 * permission.edit_own_news_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own news content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.news' => 'content_type.news',
);

$optional = array();

$modules = array(
  0 => 'node',
);
