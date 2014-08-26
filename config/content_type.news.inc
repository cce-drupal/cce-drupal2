<?php
/**
 * @file
 * content_type.news.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'news',
  'name' => 'News',
  'description' => 'Use the News content type for CCE news items.',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__news' => 'variable.field_bundle_settings_node__news',
  'variable.node_options_news' => 'variable.node_options_news',
  'variable.node_preview_news' => 'variable.node_preview_news',
  'variable.node_submitted_news' => 'variable.node_submitted_news',
  'variable.comment_default_per_page_news' => 'variable.comment_default_per_page_news',
  'variable.comment_form_location_news' => 'variable.comment_form_location_news',
  'variable.comment_preview_news' => 'variable.comment_preview_news',
  'variable.comment_subject_field_news' => 'variable.comment_subject_field_news',
);

$optional = array(
  'field.node.body.news' => 'field.node.body.news',
  'field.node.field_county.news' => 'field.node.field_county.news',
  'field.node.field_image.news' => 'field.node.field_image.news',
  'field.node.field_program_area.news' => 'field.node.field_program_area.news',
  'field.node.field_pubdate.news' => 'field.node.field_pubdate.news',
  'field.node.field_publishbody.news' => 'field.node.field_publishbody.news',
  'field.node.field_published_title.news' => 'field.node.field_published_title.news',
  'field.node.field_thumb120by90.news' => 'field.node.field_thumb120by90.news',
  'field.node.field_thumb85square.news' => 'field.node.field_thumb85square.news',
  'field.node.field_url.news' => 'field.node.field_url.news',
  'permission.create_news_content' => 'permission.create_news_content',
  'permission.edit_own_news_content' => 'permission.edit_own_news_content',
  'permission.edit_any_news_content' => 'permission.edit_any_news_content',
  'permission.delete_own_news_content' => 'permission.delete_own_news_content',
  'permission.delete_any_news_content' => 'permission.delete_any_news_content',
);

$modules = array(
  0 => 'node',
);
