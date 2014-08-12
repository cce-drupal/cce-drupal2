<?php
/**
 * @file
 * content_type.success_stories.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'success_stories',
  'name' => 'Success Stories',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__success_stories' => 'variable.field_bundle_settings_node__success_stories',
  'variable.node_options_success_stories' => 'variable.node_options_success_stories',
  'variable.node_preview_success_stories' => 'variable.node_preview_success_stories',
  'variable.node_submitted_success_stories' => 'variable.node_submitted_success_stories',
  'variable.comment_default_per_page_success_stories' => 'variable.comment_default_per_page_success_stories',
  'variable.comment_form_location_success_stories' => 'variable.comment_form_location_success_stories',
  'variable.comment_preview_success_stories' => 'variable.comment_preview_success_stories',
  'variable.comment_subject_field_success_stories' => 'variable.comment_subject_field_success_stories',
);

$optional = array(
  'field.node.body.success_stories' => 'field.node.body.success_stories',
  'field.node.field_county.success_stories' => 'field.node.field_county.success_stories',
  'field.node.field_authornameemail.success_stories' => 'field.node.field_authornameemail.success_stories',
  'field.node.field_pubdate.success_stories' => 'field.node.field_pubdate.success_stories',
  'field.node.field_program_area.success_stories' => 'field.node.field_program_area.success_stories',
  'permission.create_success_stories_content' => 'permission.create_success_stories_content',
  'permission.edit_own_success_stories_content' => 'permission.edit_own_success_stories_content',
  'permission.edit_any_success_stories_content' => 'permission.edit_any_success_stories_content',
  'permission.delete_own_success_stories_content' => 'permission.delete_own_success_stories_content',
  'permission.delete_any_success_stories_content' => 'permission.delete_any_success_stories_content',
);

$modules = array(
  0 => 'node',
);
