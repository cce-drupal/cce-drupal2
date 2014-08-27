<?php
/**
 * @file
 * content_type.hero_slide.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'hero_slide',
  'name' => 'Hero Slide',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__hero_slide' => 'variable.field_bundle_settings_node__hero_slide',
  'variable.node_options_hero_slide' => 'variable.node_options_hero_slide',
  'variable.node_preview_hero_slide' => 'variable.node_preview_hero_slide',
  'variable.node_submitted_hero_slide' => 'variable.node_submitted_hero_slide',
  'variable.comment_default_per_page_hero_slide' => 'variable.comment_default_per_page_hero_slide',
  'variable.comment_form_location_hero_slide' => 'variable.comment_form_location_hero_slide',
  'variable.comment_preview_hero_slide' => 'variable.comment_preview_hero_slide',
  'variable.comment_subject_field_hero_slide' => 'variable.comment_subject_field_hero_slide',
);

$optional = array(
  'field.node.body.hero_slide' => 'field.node.body.hero_slide',
  'field.node.field_hero_graphic.hero_slide' => 'field.node.field_hero_graphic.hero_slide',
  'permission.create_hero_slide_content' => 'permission.create_hero_slide_content',
  'permission.edit_own_hero_slide_content' => 'permission.edit_own_hero_slide_content',
  'permission.edit_any_hero_slide_content' => 'permission.edit_any_hero_slide_content',
  'permission.delete_own_hero_slide_content' => 'permission.delete_own_hero_slide_content',
  'permission.delete_any_hero_slide_content' => 'permission.delete_any_hero_slide_content',
);

$modules = array(
  0 => 'node',
);
