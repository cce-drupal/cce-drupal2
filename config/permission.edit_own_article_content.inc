<?php
/**
 * @file
 * permission.edit_own_article_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own article content',
  'roles' => array(
    0 => 'administrator',
    1 => 'feeds',
  ),
);

$dependencies = array(
  'content_type.article' => 'content_type.article',
);

$optional = array();

$modules = array(
  0 => 'node',
);
