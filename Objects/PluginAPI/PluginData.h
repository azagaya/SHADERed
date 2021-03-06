#pragma once

namespace ed
{
	namespace plugin
	{
		enum class PipelineItemType
		{
			ShaderPass,
			Geometry,
			RenderState,
			Model,
			ComputePass,
			AudioPass,
			PluginItem,
			Count
		};

		enum class VariableType
		{
			Boolean1,
			Boolean2,
			Boolean3,
			Boolean4,
			Integer1,
			Integer2,
			Integer3,
			Integer4,
			Float1,
			Float2,
			Float3,
			Float4,
			Float2x2,
			Float3x3,
			Float4x4,
			Count
		};

		enum class InputLayoutValue
		{
			Position,
			Normal,
			Texcoord,
			Tangent,
			Binormal,
			Color,
			MaxCount
		};

		enum class MessageType
		{
			Error,
			Warning,
			Message
		};

		class InputLayoutItem
		{
		public:
			InputLayoutValue Value;
			char Semantic[64];
		};

		enum class TextEditorPaletteIndex
		{
			Default,
			Keyword,
			Number,
			String,
			CharLiteral,
			Punctuation,
			Preprocessor,
			Identifier,
			KnownIdentifier,
			PreprocIdentifier,
			Comment,
			MultiLineComment,
			Background,
			Cursor,
			Selection,
			ErrorMarker,
			Breakpoint,
			LineNumber,
			CurrentLineFill,
			CurrentLineFillInactive,
			CurrentLineEdge,
			ErrorMessage,
			Max
		};
	}
}